//
//  AppendingFlowView.h
//
//  AppendingFlowView by Gregory S. Combs, based on work at https://github.com/grgcombs/AppendingFlowView
//
//  This work is licensed under the Creative Commons Attribution 3.0 Unported License. 
//  To view a copy of this license, visit http://creativecommons.org/licenses/by/3.0/
//  or send a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(unsigned int, AppendingFlowStageType) {
	FlowStagePending = 0,
	FlowStageReached = 1,
	FlowStageFailed = 10,
};

@interface AppendingFlowStage : NSObject
{
	NSInteger stageNumber_;
	AppendingFlowStageType stageType_;
	NSString *defaultCaption_;
	NSString *customCaption_;
}

@property (nonatomic) NSInteger stageNumber;
@property (nonatomic) AppendingFlowStageType stageType;
@property (nonatomic,copy) NSString *caption;

- (instancetype)initWithStage:(NSInteger)stageNumber 
		  stageType:(AppendingFlowStageType)stageType 
			caption:(NSString *)defaultCaption;

- (instancetype)initWithStage:(NSInteger)stageNumber 
			caption:(NSString *)defaultCaption;

- (BOOL)shouldPromoteTypeTo:(AppendingFlowStageType)newType;

@end



@interface AppendingFlowView : UIView {
	NSArray *_stages;
	CGSize connectorSize;
	CGSize preferredBoxSize;
	CGSize insetMargin;
	NSDictionary *stageColors_;
}

@property (nonatomic,copy) NSArray *stages;		// An array of AppendingFlowStages

@property (nonatomic,strong) UIFont *font;
@property (nonatomic,strong) UIColor *fontColor;
@property (nonatomic,copy) NSDictionary *stageColors;	// [NSNumber numberWithInt:FlowStageFailed] = [UIColor redColor]
@property (nonatomic) CGSize connectorSize;		// desired size for the connecting lines between boxes
@property (nonatomic) CGSize preferredBoxSize;			// desired size for the stage boxes w/text
@property (nonatomic) CGSize insetMargin;		// width is margin from max left/right ... height is vertical padding per row
@property (nonatomic) CGFloat pendingAlpha;		// the level of alpha to use whenever the stage is pending

// standardize on a suitable width / height for all stages in the flow view, for visual appeal or (inverse = compactness)
@property (nonatomic) BOOL uniformWidth, uniformHeight;
@end

CGFloat widthOfViews(NSArray *views);
CGFloat maxHeightOfViews(NSArray *views);

