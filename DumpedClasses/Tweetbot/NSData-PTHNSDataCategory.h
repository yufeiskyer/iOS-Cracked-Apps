//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (PTHNSDataCategory)
- (id)sha512Data;
- (id)sha256Data;
- (id)sha1Data;
- (id)md5Data;
- (unsigned int)crc32;
- (id)imageMimeType;
- (id)imageUTType;
- (_Bool)isBMPData;
- (_Bool)isICNSData;
- (_Bool)isJPEG2000Data;
- (_Bool)isTIFFData;
- (_Bool)isGIFData;
- (_Bool)isJPEGData;
- (_Bool)isPNGData;
- (id)decryptAES256:(id)arg1;
- (id)encryptAES256:(id)arg1;
- (id)hexString;
@end

