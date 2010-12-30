// -------------------------------------------------------
// PSConnectorDelegate.h
//
// Copyright (c) 2010 Jakub Suder <jakub.suder@gmail.com>
// Licensed under MIT license
// -------------------------------------------------------

@class PSRequest;

@protocol PSConnectorDelegate

- (void) requestFailed: (PSRequest *) request withError: (NSError *) error;
- (void) authenticationFailedInRequest: (PSRequest *) request;

@end
