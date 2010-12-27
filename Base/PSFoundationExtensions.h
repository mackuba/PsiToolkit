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

@interface NSNull (PsiToolkit)
- (BOOL) psIsBlank;
@end

@interface NSString (PsiToolkit)
- (BOOL) psIsBlank;
- (BOOL) psContainsString: (NSString *) substring;
- (NSString *) psCamelizedString;
- (NSString *) psPluralizedString;
- (NSString *) psStringWithPercentEscapesForFormValues;
- (NSString *) psStringWithUppercaseFirstLetter;
- (NSString *) psTrimmedString;
@end
