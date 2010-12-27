// -------------------------------------------------------
// PSUIExtensions.h
//
// Copyright (c) 2010 Jakub Suder <jakub.suder@gmail.com>
// Licensed under MIT license
// -------------------------------------------------------

#import <UIKit/UIKit.h>

#define PSUIColorWithRGB(r, g, b) [UIColor colorWithRed: r/255.0 green: g/255.0 blue: b/255.0 alpha: 1.0]
#define PSUIColorWithRGBA(r, g, b, a) [UIColor colorWithRed: r/255.0 green: g/255.0 blue: b/255.0 alpha: a]
#define PSUIColorWithWhiteValue(w) [UIColor colorWithWhite: w/255.0 alpha: 1.0]

@interface UIAlertView (PsiToolkit)
+ (void) psShowAlertWithTitle: (NSString *) title message: (NSString *) message;
+ (void) psShowErrorWithMessage: (NSString *) message;
@end

@interface UIView (PsiToolkit)
- (void) psMoveVerticallyBy: (CGFloat) pixels;
- (void) psMoveVerticallyTo: (CGFloat) position;
- (void) psMoveHorizontallyBy: (CGFloat) pixels;
- (void) psMoveHorizontallyTo: (CGFloat) position;
- (void) psResizeVerticallyBy: (CGFloat) pixels;
- (void) psResizeVerticallyTo: (CGFloat) position;
- (void) psResizeHorizontallyBy: (CGFloat) pixels;
- (void) psResizeHorizontallyTo: (CGFloat) position;
@end

@interface UITableView (PsiToolkit)
- (UITableViewCell *) psCellWithStyle: (UITableViewCellStyle) style andIdentifier: (NSString *) identifier;
- (UITableViewCell *) psGenericCellWithStyle: (UITableViewCellStyle) style;
@end

@interface UIViewController (PsiToolkit)
- (void) psSetBackButtonTitle: (NSString *) title;
@end
