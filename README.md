AppendingFlowView - Dynamic iOS flow charty thing 
=============
by Gregory S. Combs, based on work at [GitHub](https://github.com/grgcombs/AppendingFlowView)

Description
=============

- Intended to visually portray some (simple) process with stages. 
- A stages and stage status may be added/deleted dynamically, as needed, animating changes. 
- FlowView width is constrained, but resizes height as needed (to accommodate additional stages). 
- FlowView re-animates it's content views as it reorganizes itself for landscape/portrait orientation. 
- Handles multiple rows of stages/boxes. 
- Customizable fonts, colors, backgrounds, etc. 
- Sample application demos the FlowView as a bill in the legislative process. 
- This is incredibly simplistic, sure, but I'd like to see you come up with something better. (Fork it!) 

How To Use it
=============

    // in your view controller
    - (void)viewDidLoad {
        AppendingFlowView *flowView = [[AppendingFlowView] initWithFrame:CGRectMake(self.bounds)];
        NSArray *stagesData = [NSArray arrayWithObjects:
        [NSDictionary dictionaryWithObject:[NSNumber numberWithInt:FlowStageReached] forKey:@"Introduced"],
        [NSDictionary dictionaryWithObject:[NSNumber numberWithInt:FlowStageReached] forKey:@"House Committee"],
        [NSDictionary dictionaryWithObject:[NSNumber numberWithInt:FlowStageFailed] forKey:@"House Voted"],
        [NSDictionary dictionaryWithObject:[NSNumber numberWithInt:FlowStagePending] forKey:@"Senate Committee"],
        [NSDictionary dictionaryWithObject:[NSNumber numberWithInt:FlowStagePending] forKey:@"Senate Voted"],
        [NSDictionary dictionaryWithObject:[NSNumber numberWithInt:FlowStagePending] forKey:@"Sent to Governor"],
        [NSDictionary dictionaryWithObject:[NSNumber numberWithInt:FlowStagePending] forKey:@"Becomes Law"],
        nil];

        flowView.items = stagesData;
        [self addSubview:flowView];
        [flowView release];

        [super viewDidLoad];
    } 

Technology
=============

- Written in Objective-C for iOS/iPad/iPhone/iPod.

Attributions
=============
- I wrote this to answer one of my own questions at [StackOverflow](http://stackoverflow.com/questions/5859381/simple-but-dynamically-generated-flow-chart-or-process-chart-view-for-ios).
- The visual concept originated from the [Texas Legislature Online](http://www.legis.state.tx.us/BillLookup/BillStages.aspx?LegSess=821&Bill=SB1).
- Clues on how to implement it came from the folks who created [NMView](http://www.github.com/nextmunich/NMView).
- You can see it in live-action once I release another update to [TexLege](http://www.texlege.com).

License
=========================

[Under a Creative Commons Attribution-ShareAlike 3.0 Unported License](http://creativecommons.org/licenses/by-sa/3.0/)

![Creative Commons License Badge](http://i.creativecommons.org/l/by-sa/3.0/88x31.png "Creative Commons Attribution-ShareAlike")

Screenshots
=========================

![Screenshot](https://github.com/grgcombs/AppendingFlowView/raw/master/screenshot.png "AppendingFlowView")
