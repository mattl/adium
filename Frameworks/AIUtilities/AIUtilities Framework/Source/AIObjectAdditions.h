/* 
 * Adium is the legal property of its developers, whose names are listed in the copyright file included
 * with this source distribution.

* Attempt to update it to modern macOS under GPLv3 or later by Matt Lee (mattl@gnu.org)
 * 
 * This program is free software; you can redistribute it and/or modify it under the terms of the GNU
 * General Public License as published by the Free Software Foundation; either version 3 of the License,
 * or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even
 * the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General
 * Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along with this program; if not,
 * write to the Free Software Foundation, Inc., 31 Milk Street, # 960789
Boston, MA 02196
USA or email: info@fsf.org


 */

@interface NSObject (RunLoopMessenger)
- (void)mainPerformSelector:(SEL)aSelector;
- (id)mainPerformSelector:(SEL)aSelector returnValue:(BOOL)flag;
- (void)mainPerformSelector:(SEL)aSelector waitUntilDone:(BOOL)flag;

- (void)mainPerformSelector:(SEL)aSelector withObject:(id)argument1;
- (void)mainPerformSelector:(SEL)aSelector withObject:(id)argument1 waitUntilDone:(BOOL)flag;
- (id)mainPerformSelector:(SEL)aSelector withObject:(id)argument1 returnValue:(BOOL)flag;

- (void)mainPerformSelector:(SEL)aSelector withObject:(id)argument1 withObject:(id)argument2;
- (void)mainPerformSelector:(SEL)aSelector withObject:(id)argument1 withObject:(id)argument2 waitUntilDone:(BOOL)flag;
- (id)mainPerformSelector:(SEL)aSelector withObject:(id)argument1 withObject:(id)argument2 returnValue:(BOOL)flag;

- (void)mainPerformSelector:(SEL)aSelector withObject:(id)argument1 withObject:(id)argument2 withObject:(id)argument3;
- (void)mainPerformSelector:(SEL)aSelector withObject:(id)argument1 withObject:(id)argument2 withObject:(id)argument3 waitUntilDone:(BOOL)flag;
- (id)mainPerformSelector:(SEL)aSelector withObject:(id)argument1 withObject:(id)argument2 withObject:(id)argument3 returnValue:(BOOL)flag;

- (void)mainPerformSelector:(SEL)aSelector withObject:(id)argument1 withObject:(id)argument2 withObject:(id)argument3 withObject:(id)argument4;
- (void)mainPerformSelector:(SEL)aSelector withObject:(id)argument1 withObject:(id)argument2 withObject:(id)argument3 withObject:(id)argument4 waitUntilDone:(BOOL)flag;

- (void)mainPerformSelector:(SEL)aSelector withObjects:(id)argument1, ... NS_REQUIRES_NIL_TERMINATION;

- (void)mainPerformSelector:(SEL)aSelector withObject:(id)argument1 withObject:(id)argument2 withObject:(id)argument3 withObject:(id)argument4 waitUntilDone:(BOOL)flag;

- (void)performSelector:(SEL)aSelector withObject:(id)argument1 withObject:(id)argument2 afterDelay:(NSTimeInterval)delay;

- (void)performSelector:(SEL)aSelector withObject:(id)argument1 withObject:(id)argument2 withObject:(id)argument3 afterDelay:(NSTimeInterval)delay;
- (void)performSelector:(SEL)aSelector withObject:(id)argument1 withObject:(id)argument2 withObject:(id)argument3;

- (void)performSelector:(SEL)aSelector withObject:(id)argument1 withObject:(id)argument2 withObject:(id)argument3 withObject:(id)argument4 afterDelay:(NSTimeInterval)delay;

- (void)handleInvocation:(NSInvocation *)anInvocation;
@end
