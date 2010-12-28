// -------------------------------------------------------
// PSAccount.h
//
// Copyright (c) 2010 Jakub Suder <jakub.suder@gmail.com>
// Licensed under MIT license
// -------------------------------------------------------

#import <Foundation/Foundation.h>
#import "PSModel.h"

@interface PSAccount : PSModel {
  NSString *username;
  NSString *password;
}

@property (nonatomic, copy) NSString *username;
@property (nonatomic, copy) NSString *password;

+ (NSArray *) propertyList;
+ (NSArray *) propertiesSavedInSettings;
+ (BOOL) isPropertySavedSecurely: (NSString *) property;
+ (NSString *) settingNameForProperty: (NSString *) property;
+ (id) accountFromSettings;

- (BOOL) hasAllRequiredProperties;
- (void) save;
- (void) clear;

@end
