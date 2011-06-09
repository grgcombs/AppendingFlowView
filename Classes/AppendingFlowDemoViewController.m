//
//  AppendingFlowDemoViewController.m
//
//  AppendingFlowView by Gregory S. Combs, based on work at https://github.com/grgcombs/AppendingFlowView
//
//  This work is licensed under the Creative Commons Attribution-ShareAlike 3.0 Unported License. 
//  To view a copy of this license, visit http://creativecommons.org/licenses/by-sa/3.0/
//  or send a letter to Creative Commons, 444 Castro Street, Suite 900, Mountain View, California, 94041, USA.
//

#import "AppendingFlowDemoViewController.h"
#import "AppendingFlowView.h"

@implementation AppendingFlowDemoViewController
@synthesize flowView=flowView_;


// Implement viewDidLoad to do additional setup after loading the view, typically from a nib.
- (void)viewDidLoad {
    [super viewDidLoad];
	
	NSArray *stagesData = [NSArray arrayWithObjects:
						   [NSDictionary dictionaryWithObject:[NSNumber numberWithInt:FlowStageReached] forKey:@"Introduced"],
						   [NSDictionary dictionaryWithObject:[NSNumber numberWithInt:FlowStageReached] forKey:@"House Committee"],
						   [NSDictionary dictionaryWithObject:[NSNumber numberWithInt:FlowStageFailed] forKey:@"House Voted"],
						   [NSDictionary dictionaryWithObject:[NSNumber numberWithInt:FlowStagePending] forKey:@"Senate Committee"],
						   [NSDictionary dictionaryWithObject:[NSNumber numberWithInt:FlowStagePending] forKey:@"Senate Voted"],
						   [NSDictionary dictionaryWithObject:[NSNumber numberWithInt:FlowStagePending] forKey:@"Sent to Governor"],
						   [NSDictionary dictionaryWithObject:[NSNumber numberWithInt:FlowStagePending] forKey:@"Becomes Law"],
						   nil];
	
	self.flowView.items = stagesData;
	
}



// Override to allow orientations other than the default portrait orientation.
- (BOOL)shouldAutorotateToInterfaceOrientation:(UIInterfaceOrientation)interfaceOrientation {
    return YES;
}

- (void)didReceiveMemoryWarning {
	// Releases the view if it doesn't have a superview.
    [super didReceiveMemoryWarning];
	
}

- (void)viewDidUnload {
	// Release any retained subviews of the main view.
	// e.g. self.myOutlet = nil;
	
	[super viewDidUnload];
}


- (void)dealloc {
	self.flowView = nil;
	
    [super dealloc];
}

@end
