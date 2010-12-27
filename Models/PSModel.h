// -------------------------------------------------------
// PSModel.h
//
// Copyright (c) 2010 Jakub Suder <jakub.suder@gmail.com>
// Licensed under MIT license
// -------------------------------------------------------

#import <Foundation/Foundation.h>

#define PSModelRecordId @"recordId"

@interface PSModel : NSObject <NSCopying> {
  NSNumber *recordId;
}

@property (nonatomic, copy) NSNumber *recordId;
@property (nonatomic, readonly) NSInteger recordIdValue;

+ (NSString *) classNameForProperty: (NSString *) property;
+ (NSArray *) propertyList;

#ifdef PSITOOLKIT_ENABLE_MODELS_JSON
// parses NSObject (usually NSArray or NSDictionary) from a JSON string
+ (id) valueFromJSONString: (NSString *) jsonString;

// parses a PSModel object from a JSON string
+ (id) objectFromJSONString: (NSString *) jsonString;

// parses a NSArray of PSModel objects from a JSON string
+ (NSArray *) objectsFromJSONString: (NSString *) jsonString;
#endif

// builds a PSModel object from a JSON dictionary
+ (id) objectFromJSON: (NSDictionary *) json;

// builds a NSArray of PSModel objects from a NSArray of JSON dictionaries
+ (NSArray *) objectsFromJSON: (NSArray *) jsonArray;

+ (void) appendObjectsToList: (NSArray *) objects;
+ (void) prependObjectsToList: (NSArray *) objects;
+ (id) objectWithId: (NSNumber *) objectId;
+ (id) objectWithIntegerId: (NSInteger) objectId;
+ (NSInteger) count;
+ (NSArray *) list;
+ (void) reset;

- (BOOL) isEqual: (id) other;

@end
