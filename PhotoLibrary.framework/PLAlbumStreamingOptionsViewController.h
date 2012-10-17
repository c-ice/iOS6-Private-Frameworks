/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "PLAlbumChangeObserver-Protocol.h"
#import "PLComposeRecipientViewControllerDelegate-Protocol.h"
#import "PLSubscriberViewControllerDelegate-Protocol.h"
#import "UIActionSheetDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIPopoverControllerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSArray, NSString, PLCloudSharedAlbum, PLComposeRecipientViewController, UIBarButtonItem, UIPopoverController, UISwitch, UITableView, UITextField;

@interface PLAlbumStreamingOptionsViewController : UIViewController <PLComposeRecipientViewControllerDelegate, PLSubscriberViewControllerDelegate, PLAlbumChangeObserver, UIActionSheetDelegate, UIAlertViewDelegate, UITableViewDataSource, UITableViewDelegate, UITextFieldDelegate, UIPopoverControllerDelegate>
{
    PLCloudSharedAlbum *_album;
    NSArray *_albumAssets;
    NSString *_albumName;
    int _optionsMode;
    id <PLAlbumStreamingOptionsViewControllerDelegate> _delegate;
    PLComposeRecipientViewController *_composeRecipientController;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_doneButton;
    UITableView *_optionsTableView;
    UITextField *_albumNameTextField;
    UISwitch *_wantsPublicWebsiteSwitch;
    BOOL _changingValueFromControl;
    BOOL _adjustedInsetsForKeyboard;
    BOOL _streamOwner;
    unsigned int _addSubscribersRow;
    unsigned int _showingPublicWebsiteActivityIndicator:1;
    unsigned int _showingShareLinkOption:1;
    int _publicURLTransitionMode;
    UIPopoverController *_shareLinkPopoverController;
    BOOL _isPresentedModally;
    NSArray *_visibleInvitationRecords;
    NSString *_visiblePublicURL;
}

@property(nonatomic) BOOL streamOwner; // @synthesize streamOwner=_streamOwner;
@property(retain, nonatomic) NSArray *albumAssets; // @synthesize albumAssets=_albumAssets;
@property(retain, nonatomic) PLCloudSharedAlbum *album; // @synthesize album=_album;
@property(copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property(nonatomic) BOOL isPresentedModally; // @synthesize isPresentedModally=_isPresentedModally;
@property(nonatomic) id <PLAlbumStreamingOptionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)subscriberViewController:(id)arg1 didDeleteSubscriber:(id)arg2;
- (void)composeRecipientViewControllerReturnKeyPressed:(id)arg1;
- (id)backingNavigationControllerForComposeRecipientViewController:(id)arg1;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)textFieldDidEndEditing:(id)arg1;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(int)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (void)albumDidChange:(id)arg1;
- (void)_updatePublicURLStateIfNecessary;
- (void)_updatePublicURLTransitionMode;
- (id)_visibleInvitationRecordsForStreamOwner:(BOOL)arg1;
- (void)_setShowingPublicURLActivitySpinner:(BOOL)arg1;
- (BOOL)_shouldShowPublicURLActivitySpinner;
- (BOOL)_publicURLEnabled;
- (void)_displayActivitySheet;
- (void)_displayDeleteConfirmation:(id)arg1;
- (id)_optionsTableViewFooter;
- (void)_deletePhotoStream;
- (void)_editAlbumIfNecessaryWithCompletionHandler:(id)arg1;
- (void)_createNewCloudSharedAlbum;
- (void)_keyboardDidHide:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_changeWantsPublicWebsite:(id)arg1;
- (void)_changeAlbumName:(id)arg1;
- (void)_doneAction:(id)arg1;
- (void)_cancelAction:(id)arg1;
- (void)_handleCompletionWithReason:(int)arg1;
- (id)_suppresionContexts;
- (BOOL)_appAllowsSupressionOfAlerts;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)loadView;
- (void)_updateWantsPublicWebsiteField;
- (void)_updateAlbumNameField;
- (void)_updateNavButtons;
- (BOOL)_albumNameIsValid;
- (void)_updateAllControls;
- (void)dealloc;
- (id)initForEditOpertationForAlbum:(id)arg1;
- (id)initForAlbumCreationOperationWithAssets:(id)arg1;
- (id)_initWithOptionsMode:(int)arg1 withAlbum:(id)arg2 andAssets:(id)arg3;

@end
