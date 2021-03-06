//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface TTTelecomGetPhoneErrorModel : NSObject
{
    long long _clientErrorCode;
    long long _httpErrorCode;
    NSString *_errorText;
}

+ (id)textOfErrorCode:(long long)arg1;
@property(copy, nonatomic) NSString *errorText; // @synthesize errorText=_errorText;
@property(nonatomic) long long httpErrorCode; // @synthesize httpErrorCode=_httpErrorCode;
@property(nonatomic) long long clientErrorCode; // @synthesize clientErrorCode=_clientErrorCode;
- (void).cxx_destruct;
- (id)toNSError;
- (id)init;

@end

