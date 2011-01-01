// -------------------------------------------------------
// PSFoundationExtensions.h
//
// Copyright (c) 2010 Jakub Suder <jakub.suder@gmail.com>
// Licensed under MIT license
// -------------------------------------------------------

#import <Foundation/Foundation.h>

@interface NSArray (PsiToolkit)
- (NSArray *) psCompact;
- (NSArray *) psSortedArrayUsingField: (NSString *) field ascending: (BOOL) ascending;
- (NSDictionary *) psGroupByKey: (NSString *) key;
@end

@interface NSDate (PsiToolkit)
+ (NSDate *) psDaysAgo: (NSInteger) days;
+ (NSDate *) psDaysFromNow: (NSInteger) days;
+ (NSDateFormatter *) psJSONDateFormatter;
- (BOOL) psIsEarlierOrSameDay: (NSDate *) otherDate;
- (NSDate *) psMidnight;
- (NSString *) psJSONDateFormat;
@end

@interface NSDictionary (PsiToolkit)
+ (NSDictionary *) psDictionaryWithKeysAndObjects: (id) firstObject, ...;
@end

@interface NSNull (PsiToolkit)
- (BOOL) psIsPresent;
@end

@interface NSString (PsiToolkit)
+ (NSString *) psStringWithFormEncodedFields: (NSDictionary *) fields;
+ (NSString *) psStringWithFormEncodedFields: (NSDictionary *) fields ofModelNamed: (NSString *) name;
- (BOOL) psIsPresent;
- (BOOL) psContainsString: (NSString *) substring;
- (NSString *) psCamelizedString;
- (NSString *) psPluralizedString;
- (NSString *) psStringWithPercentEscapesForFormValues;
- (NSString *) psStringWithUppercaseFirstLetter;
- (NSString *) psTrimmedString;
- (NSString *) psUnderscoreSeparatedString;
@end
