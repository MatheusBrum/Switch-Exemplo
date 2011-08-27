//
//  DocumentViewController.h
//  Document
//
//  Created by Matheus Brum on 27/10/09.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DocumentViewController : UIViewController {
	IBOutlet UISwitch *chave;

}
-(IBAction)ligar;
-(IBAction)desligar;
-(IBAction)aparecer;
-(IBAction)desaparecer;
@property(nonatomic,retain)UISwitch *chave;
@end

