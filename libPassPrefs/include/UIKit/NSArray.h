/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <Foundation/NSArray.h>


@interface NSArray (UIStringDrawingPrivate)
-(CGSize)_drawComponentsJoinedByString:(id)string atPoint:(CGPoint*)point forWidth:(float)width withFont:(id)font lineBreakMode:(int)mode;
-(CGSize)sizeOfComponentsJoinedByString:(id)componentsJoinedByString withFont:(id)font forWidth:(float)width lineBreakMode:(int)mode;
-(CGSize)drawComponentsJoinedByString:(id)string atPoint:(CGPoint)point forWidth:(float)width withFont:(id)font lineBreakMode:(int)mode;
@end

@interface NSArray (UICollectionAdditions_Performance)
-(id)initWithObjectsFromArray:(id)array range:(NSRange)range;
-(void)makeObjectsPerformSelector:(SEL)selector object:(id)object range:(NSRange)range;
@end

@interface NSArray (UICollectionAdditions)
-(id)nextToLastObject;
@end

@interface NSArray (UIKBExtras)
-(id)_kb_firstObject;
-(BOOL)_kb_firstTwoObjectsEqual;
-(BOOL)_kb_firstObjectsEqual:(unsigned)equal;
-(id)intersectionWithArray:(id)array;
-(NSRange)rangeWithStartIndex:(int)startIndex endIndex:(int)index;
@end

