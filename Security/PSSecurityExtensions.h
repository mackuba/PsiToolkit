// -------------------------------------------------------
// PSSecurityExtensions.h
//
// Copyright (c) 2010 Jakub Suder <jakub.suder@gmail.com>
// Licensed under MIT license
// -------------------------------------------------------

@interface NSUserDefaults (PsiToolkit)
- (NSString *) psPasswordForKey: (NSString *) key andUsername: (NSString *) username;
- (void) psSetPassword: (NSString *) password forKey: (NSString *) key andUsername: (NSString *) username;
@end
