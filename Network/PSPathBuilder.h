// -------------------------------------------------------
// PSPathBuilder.h
//
// Copyright (c) 2010 Jakub Suder <jakub.suder@gmail.com>
// Licensed under MIT license
// -------------------------------------------------------

#import <Foundation/Foundation.h>

@interface PSPathBuilder : NSObject {
  NSMutableString *fullPath;
  BOOL hasParams;
}

@property (nonatomic, readonly) NSString *path;

+ (PSPathBuilder *) builderWithBasePath: (NSString *) path;
- (id) initWithBasePath: (NSString *) path;

- (void) addParameterWithName: (NSString *) param value: (id) value;
- (void) addParameterWithName: (NSString *) param integerValue: (NSInteger) value;

@end
