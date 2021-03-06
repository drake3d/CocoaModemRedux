//
//  Analyze.h
//  cocoaModem
//
//  Created by Kok Chen on 2/22/05.
//

#ifndef _ANALYZE_H_
	#define _ANALYZE_H_

	#import <Cocoa/Cocoa.h>
	#include "Modem.h"
	#include "AYTextView.h"
    #import "RTTYTransceiver.h"
    #import "RTTYConfigSet.h"

	@interface Analyze : Modem {
	
		IBOutlet id spectrum ;
		IBOutlet id timeConstant ;
		IBOutlet id dynamicRange ;
		
		IBOutlet id rxctrl ;
		
		//  plot
		IBOutlet id scope ;

		NSThread *thread ;
		
		
		//  RTTY Prefs
		Boolean usos ;
		Boolean bell ;
		Boolean robust ;
		Boolean repeatState ;
	}
@property RTTYConfigSet *set;
@property RTTYTransceiver *a;

	- (IBAction)repeatButtonPushed:(id)sender ;
	//  spectrum
	- (IBAction)spectrumOptionChanged:(id)sender ;
	
	- (void)selectBandwidth:(int)index ;
	- (void)selectDemodulator:(int)index ;

	@end

#endif
