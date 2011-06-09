//
//  AppendingFlowView.h
//
//  AppendingFlowView by Gregory S. Combs, based on work at https://github.com/grgcombs/AppendingFlowView
//
//  This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License. 
//  To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/
//  or send a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
//

#import <UIKit/UIKit.h>

typedef enum  {
	FlowStagePending = 0,
	FlowStageReached = 1,
	FlowStageFailed = 10,
} AppendingFlowStageType;

@interface AppendingFlowView : UIView {
	NSArray *items_;
	CGSize connectorSize;
	CGSize preferredBoxSize;
	CGSize insetMargin;
	NSDictionary *stageColors_;
}

@property (nonatomic,copy) NSArray *items;		// An array of dictionaries, value is an NSNumber of the stage type, key is the title

@property (nonatomic,retain) UIFont *font;
@property (nonatomic,retain) UIColor *fontColor;
@property (nonatomic,copy) NSDictionary *stageColors;	// [NSNumber numberWithInt:FlowStageFailed] = [UIColor redColor]
@property (nonatomic) CGSize connectorSize;		// desired size for the connecting lines between boxes
@property (nonatomic) CGSize preferredBoxSize;			// desired size for the stage boxes w/text
@property (nonatomic) CGSize insetMargin;		// width is margin from max left/right ... height is vertical padding per row
@property (nonatomic) CGFloat pendingAlpha;		// the level of alpha to use whenever the stage is pending

// standardize on a suitable width / height for all stages in the flow view, for visual appeal or (inverse = compactness)
@property (nonatomic) BOOL uniformWidth, uniformHeight;
@end
