// -------------------------------------------------------
// PSConnector.h
//
// Copyright (c) 2010 Jakub Suder <jakub.suder@gmail.com>
// Licensed under MIT license
// -------------------------------------------------------

#import <Foundation/Foundation.h>
#import "PSConnectorAccount.h"
#import "PSRequest.h"
#import "PSRouter.h"

@class PSModel;

@interface PSConnector : NSObject {
  NSString *baseURL;
  NSString *userAgent;
  NSMutableArray *currentRequests;
  id account;
  id router;
  BOOL usesHTTPAuthentication;
  BOOL loggingEnabled;
}

@property (nonatomic, copy) NSString *baseURL;
@property (nonatomic, copy) NSString *userAgent;
@property (nonatomic, retain) id router;
@property (nonatomic, retain) id account;
@property (nonatomic, assign) BOOL usesHTTPAuthentication;
@property (nonatomic, assign) BOOL loggingEnabled;

+ (id) sharedConnector;
+ (void) setSharedConnector: (PSConnector *) connector;
+ (void) setSharedConnectorClass: (Class) klass;

- (id) init;
- (id) initWithBaseURL: (NSString *) url;

- (void) prepareRequest: (PSRequest *) request;

- (PSRequest *) requestToPath: (NSString *) path;
- (PSRequest *) requestToURL: (NSString *) url;
- (PSRequest *) requestToPath: (NSString *) path method: (NSString *) method;
- (PSRequest *) requestToURL: (NSString *) url method: (NSString *) method;

#ifdef PSITOOLKIT_ENABLE_MODELS
- (PSRequest *) createRequestForObject: (PSModel *) object;
- (PSRequest *) showRequestForObject: (PSModel *) object;
- (PSRequest *) updateRequestForObject: (PSModel *) object;
- (PSRequest *) deleteRequestForObject: (PSModel *) object;
#endif

- (void) handleFinishedRequest: (PSRequest *) request;
- (void) handleFailedRequest: (PSRequest *) request;
- (void) handleFailedAuthentication: (PSRequest *) request;
- (void) checkResponseForErrors: (PSRequest *) request;

- (id) parseResponseFromRequest: (PSRequest *) request;

#ifdef PSITOOLKIT_ENABLE_MODELS_JSON
- (id) parseObjectFromRequest: (PSRequest *) request model: (Class) klass;
- (NSArray *) parseObjectsFromRequest: (PSRequest *) request model: (Class) klass;
#endif

- (void) cleanupRequest: (PSRequest *) request;
- (void) cancelAllRequests;

@end
