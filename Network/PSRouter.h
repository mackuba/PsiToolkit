// -------------------------------------------------------
// PSRouter.h
//
// Copyright (c) 2010 Jakub Suder <jakub.suder@gmail.com>
// Licensed under MIT license
// -------------------------------------------------------

#import <Foundation/Foundation.h>

@class PSModel;

@protocol PSRouter <NSObject>

- (NSString *) pathForModel: (Class) model;
- (NSString *) pathForObject: (PSModel *) object;

@end
