/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class PLPhotoAlbum, UIImage, NSString, NSData, NSError, NSMutableDictionary;

@interface PLCameraImportItem : PLPhoto  {
    NSString *_identifier;
    NSString *_parentFolder;
    NSString *_basePath;
    NSMutableDictionary *_representationsMapping;
    UIImage *_thumbnail;
    NSData *_thumbnailData;
    int _thumbnailState;
    BOOL _metadataRequested;
    BOOL _thumbnailRequested;
    PLPhotoAlbum *_event;
    BOOL _shouldImport;
    NSError *_importError;
}

@property(retain) NSError * importError;
@property BOOL shouldImport;
@property(retain) PLPhotoAlbum * event;
@property(retain) NSData * thumbnailData;
@property(readonly) UIImage * thumbnail;
@property(retain) NSString * basePath;
@property(readonly) NSString * parentFolder;
@property(readonly) NSString * identifier;


- (id)event;
- (void)setEvent:(id)arg1;
- (id)identifier;
- (BOOL)isLocked;
- (void)dealloc;
- (id)description;
- (id)creationDate;
- (id)jpgExtension;
- (id)audioExtension;
- (id)otherExtensions;
- (id)parentFolder;
- (unsigned long long)fileSize;
- (BOOL)isJPEG;
- (BOOL)isRaw;
- (BOOL)isMovie;
- (BOOL)canRequestMetadata;
- (id)basePath;
- (void)_addRepresentation:(id)arg1;
- (void)_removeRepresentation:(id)arg1;
- (id)representationForCameraFile:(id)arg1;
- (id)metadataForRepresentationWithFileExtension:(id)arg1;
- (void)clearMetadata;
- (int)thumbnailState;
- (void)requestThumbnail;
- (void)cancelThumbnailRequest;
- (void)clearThumbnail;
- (void)setThumbnailWithImageRef:(struct CGImage { }*)arg1;
- (BOOL)isInDatabaseForce:(BOOL)arg1;
- (void)markRepresentationsInDatabase;
- (BOOL)_isTypeWithSelector:(SEL)arg1;
- (BOOL)isStandaloneMovie;
- (id)fileExtensions;
- (id)_fileExtensionForTypeWithSelector:(SEL)arg1;
- (id)rawExtension;
- (id)movieExtension;
- (void)setShouldImport:(BOOL)arg1;
- (id)thumbnailData;
- (void)setThumbnailData:(id)arg1;
- (void)setBasePath:(id)arg1;
- (id)initWithIdentifier:(id)arg1 parentFolder:(id)arg2;
- (void)addRepresentationForCameraFile:(id)arg1;
- (void)removeRepresentationForCameraFile:(id)arg1;
- (id)representations;
- (void)requestMetadata;
- (BOOL)hasAllMetadata;
- (id)thumbnail;
- (BOOL)canRequestThumbnail;
- (void)setThumbnailState:(int)arg1;
- (BOOL)shouldImport;
- (BOOL)isOnDisk;
- (void)setImportError:(id)arg1;
- (BOOL)isStandalonePhoto;
- (id)importError;
- (BOOL)isAudio;

@end
