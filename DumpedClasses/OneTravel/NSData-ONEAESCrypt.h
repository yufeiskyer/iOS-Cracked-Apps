//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSData.h"

@interface NSData (ONEAESCrypt)
+ (id)one_dataWithBase64EncodedString:(id)arg1;
- (id)one_base64EncodingWithLineLength:(unsigned long long)arg1;
- (id)one_base64Encoding;
- (id)initWithBase64EncodedString:(id)arg1;
- (id)one_AESDecryptWithType:(unsigned long long)arg1 encryptKey:(id)arg2 iv:(id)arg3;
- (id)one_AESEncryptWithType:(unsigned long long)arg1 encryptKey:(id)arg2 iv:(id)arg3;
- (id)one_AES256DecryptWithKey:(id)arg1;
- (id)one_AES256EncryptWithKey:(id)arg1;
@end

