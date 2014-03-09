/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UITableCell.h"
#import "UIKit-Structs.h"

@class UITextLabel, UIImageView;

@interface UIImageAndTextTableCell : UITableCell {
	UITextLabel* _titleTextLabel;
	UIImageView* _iconImageView;
}
+(id)defaultTitleFont;
-(void)dealloc;
-(id)titleTextLabel;
-(void)setTitle:(id)title;
-(id)title;
-(void)setImage:(id)image;
-(id)image;
-(id)_getTitleColor;
-(void)updateHighlightColors;
-(void)setUserInteractionEnabled:(BOOL)enabled;
-(id)iconImageView;
-(CGPoint)textInset;
-(CGPoint)iconInset;
-(void)setAlignment:(int)alignment;
-(int)alignment;
-(void)layoutSubviews;
-(id)_scriptingInfo;
@end

