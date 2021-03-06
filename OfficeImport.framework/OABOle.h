/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@interface OABOle : NSObject  {
}

+ (id)read4ByteFromStream:(struct SsrwOOStream { int (**x1)(); }*)arg1;
+ (id)readAnsiStringFromStream:(struct SsrwOOStream { int (**x1)(); }*)arg1;
+ (id)stringForCLSID:(struct _SsrwOO_GUID { unsigned int x1; unsigned short x2; unsigned short x3; unsigned char x4[8]; })arg1;
+ (id)readCLSIDFromStream:(struct SsrwOOStream { int (**x1)(); }*)arg1;
+ (BOOL)isBiffCLSID:(id)arg1;
+ (BOOL)isChart:(id)arg1;
+ (id)readUnicodeStringFromStream:(struct SsrwOOStream { int (**x1)(); }*)arg1;
+ (BOOL)readSharedInfoFor:(id)arg1 fromStorage:(struct SsrwOOStorage { struct _Storage {} *x1; unsigned short x2[36]; }*)arg2;
+ (id)readFromFileName:(id)arg1 cancel:(id)arg2;
+ (id)readFromParentStorage:(struct SsrwOOStorage { struct _Storage {} *x1; unsigned short x2[36]; }*)arg1 storageName:(id)arg2 cancel:(id)arg3;
+ (id)readCompressedFromStream:(struct SsrwOOStream { int (**x1)(); }*)arg1 compressedSize:(unsigned long)arg2 uncompressedSize:(unsigned long)arg3 cancel:(id)arg4;
+ (id)readFromStream:(struct SsrwOOStream { int (**x1)(); }*)arg1 size:(unsigned long)arg2 cancel:(id)arg3;
+ (id)readFromData:(id)arg1 cancel:(id)arg2;


@end
