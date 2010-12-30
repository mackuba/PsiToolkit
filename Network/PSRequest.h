// -------------------------------------------------------
// PSRequest.h
//
// Copyright (c) 2010 Jakub Suder <jakub.suder@gmail.com>
// Licensed under MIT license
// -------------------------------------------------------

#import <Foundation/Foundation.h>
#import "ASIHTTPRequest.h"

typedef enum {
  PSAnyResponseType,
  PSHTMLResponseType,
  PSImageResponseType,
  PSImageDataResponseType,
  PSJSONResponseType,
  PSXMLResponseType,
  PSBinaryResponseType
} PSResponseContentType;

@class PSConnector, PSModel, PSResponse, PSPathBuilder;

@interface PSRequest : ASIHTTPRequest {
  PSConnector *connector;
  id target;
  SEL callback;
  SEL successHandler;
  PSResponseContentType expectedContentType;
  PSResponse *response;
  PSPathBuilder *pathBuilder;
}

@property (nonatomic, retain) id target;
@property (nonatomic, assign) SEL callback;
@property (nonatomic, assign) SEL successHandler;
@property (nonatomic, copy) NSString *postData;
@property (nonatomic, assign) PSResponseContentType expectedContentType;
@property (nonatomic, readonly) PSResponse *response;

- (id) initWithURL: (NSString *) url connector: (PSConnector *) aConnector;
- (void) addURLParameter: (NSString *) param value: (id) value;
- (void) addURLParameter: (NSString *) param integerValue: (NSInteger) value;
- (void) sendFor: (id) target callback: (SEL) callback;
- (void) send;

- (id) objectForKey: (NSString *) key;

- (void) notifyTargetOfSuccess;
- (void) notifyTargetOfSuccessWithObject: (id) object;
- (void) notifyTargetOfError: (NSError *) error;
- (void) notifyTargetOfAuthenticationError;

@end
