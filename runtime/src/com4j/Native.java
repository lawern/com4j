package com4j;

import java.nio.ByteBuffer;


/**
 * Native methods implemented in the dll.
 *
 * @author Kohsuke Kawaguchi (kk@kohsuke.org)
 * @author Michael Schnell (ScM)
 */
class Native {

    /**
     * Initializes the native code.
     */
    static native void init();

    /**
     * Creates a COM object and returns its pointer.
     */
    static native int createInstance( String clsid, int clsctx, long iid1, long iid2 );

    /**
     * Calls {@code GetActiveObject} Win32 API.
     */
    static native int getActiveObject( long clsid1, long clsid2 );

    /**
     * Equivalent of {@code GetObject} in VB.
     *
     * See http://support.microsoft.com/kb/122288
     */
    static native int getObject( String fileName, String progId );

    /**
     * returns a pointer to the running object table.
     * @return a pointer to the running object table
     */
    static native int getRunningObjectTable();
    /**
     * Returns an enum moniker for the given running object table.
     * @param rotPointer the pointer to the running object table
     * @return an enum moniker for the given running object table
     */
    static native int getEnumMoniker(int rotPointer);
    /**
     * Returns a pointer to the next object of the running object table.
     * @param rotPointer a pointer to the running object table
     * @param enumMonikerPointer a pointer to an enum moniker
     * @return a pointer to the next object of the running object table
     */
    static native int getNextRunningObject(int rotPointer, int enumMonikerPointer);

    /**
     * Calls <tt>IUnknown.AddRef</tt>.
     */
    static native int addRef( int pComObject );

    /**
     * Calls <tt>IUnknown.Release</tt>.
     */
    static native int release( int pComObject );

    /**
     * Invokes a method.
     *
     * @throws ComException
     *      if the invocation returns a failure HRESULT, and the return type
     *      is not HRESULT.
     */
    static native Object invoke( int pComObject, int vtIndex,
                                 Object[] args, int[] parameterConversions,
                                 int returnIndex, boolean returnIsInOut, int returnConversion );

    /**
     * Invokes {@code IDispatch.Invoke}.
     */
    static native Variant invokeDispatch(
        int pComObject, int dispId, int flag, Object[] args );

    /**
     * Gets the error info.
     *
     * <p>
     * This method is used after the <tt>invoke</tt> method fails,
     * to obtain the <tt>IErrorInfo</tt> object. This method checks
     * <tt>ISupportErrorInfo</tt>.
     *
     * @param pComObject
     *      The object that caused an error.
     * @return
     *      the pointer to <tt>IErrorInfo</tt> or null if not available.
     */
    static native int getErrorInfo( int pComObject, long iid1, long iid2 );

    static IErrorInfo getErrorInfo( int pComObject, Class<? extends Com4jObject> _interface ) {
        GUID guid = COM4J.getIID(_interface);
        int p = getErrorInfo(pComObject,guid.v[0],guid.v[1]);
        if(p==0)    return null;
        else        return Wrapper.create(IErrorInfo.class,p);
    }

    /**
     * Gets the error message string for the given HRESULT.
     *
     * @return null if none is found.
     */
    static native String getErrorMessage( int hresult );

    static native int queryInterface( int pComObject, long iid1, long iid2 );

    static int queryInterface( int pComObject, GUID guid ) {
        return queryInterface(pComObject, guid.v[0], guid.v[1]);
    }

    /**
     * Loads a type library from a given file, wraps it, and returns its IUnknown.
     */
    static native int loadTypeLibrary(String name);

    /**
     * Calls "CoInitialize"
     */
    static native void coInitialize();
    /**
     * Calls "CoUninitialize"
     */
    static native void coUninitialize();

    /**
     * Calls IConnectionPoint::Advise and subscribe to the event.
     *
     * @param connectionPoint
     *      interface pointer to the connection point.
     * @return
     *      pointer to the native proxy
     */
    static native int advise(int connectionPoint, EventProxy<?> eventProxy, long iid1, long iid2);

    /**
     * Shuts down the event subscription by calling IConnectionPoint::Unadvise.
     */
    static native void unadvise(int nativeProxy);

    /**
     * Creates a direct buffer.
     */
    static native ByteBuffer createBuffer(int ptr, int size);
}
