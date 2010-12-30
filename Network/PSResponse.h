// -------------------------------------------------------
// PSResponse.h
//
// Copyright (c) 2010 Jakub Suder <jakub.suder@gmail.com>
// Licensed under MIT license
// -------------------------------------------------------

#import <Foundation/Foundation.h>

@class PSRequest;

@interface PSResponse : NSObject {
  PSRequest *request;
}

@property (nonatomic, readonly) NSString *contentType;
@property (nonatomic, readonly) NSString *text;
@property (nonatomic, readonly) NSDictionary *headers;
@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) NSInteger status;

- (id) initWithRequest: (PSRequest *) request;
- (BOOL) hasReadableContentType;
- (BOOL) matchesExpectedContentType;

@end
