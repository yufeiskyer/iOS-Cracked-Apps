//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQBaseViewController.h"

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class MQQCustomInputTextField, MQQDigitInputView, MQQInputListView, MQQSwitch, NSArray, NSDictionary, NSMutableArray, NSString, UIPickerView;

@interface MQQTrafficSettingLocationAndCarrierViewController_V2 : MQQBaseViewController <UITextFieldDelegate, UIPickerViewDataSource, UIPickerViewDelegate>
{
    _Bool _isFirstSetup;
    MQQInputListView *_inputListView;
    MQQCustomInputTextField *_locationTextField;
    MQQCustomInputTextField *_carrierTextField;
    UIPickerView *_pickerView;
    MQQCustomInputTextField *_extendsLastLeftFlowTextField;
    MQQSwitch *_extendsLastLeftFlowSwitch;
    MQQCustomInputTextField *_lastLeftFlowTextField;
    MQQDigitInputView *_lastLeftFlowDigitInputView;
    NSDictionary *_missTrafficsms;
    NSArray *_locations;
    NSArray *_carriers;
    NSMutableArray *_currentCarriers;
    long long _selectedLocationIndex;
    long long _selectedCarrierIndex;
    NSString *_oldTrafficCarrier;
}

@property(copy, nonatomic) NSString *oldTrafficCarrier; // @synthesize oldTrafficCarrier=_oldTrafficCarrier;
@property(nonatomic) long long selectedCarrierIndex; // @synthesize selectedCarrierIndex=_selectedCarrierIndex;
@property(nonatomic) long long selectedLocationIndex; // @synthesize selectedLocationIndex=_selectedLocationIndex;
@property(retain, nonatomic) NSMutableArray *currentCarriers; // @synthesize currentCarriers=_currentCarriers;
@property(retain, nonatomic) NSArray *carriers; // @synthesize carriers=_carriers;
@property(retain, nonatomic) NSArray *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) NSDictionary *missTrafficsms; // @synthesize missTrafficsms=_missTrafficsms;
@property(retain, nonatomic) MQQDigitInputView *lastLeftFlowDigitInputView; // @synthesize lastLeftFlowDigitInputView=_lastLeftFlowDigitInputView;
@property(retain, nonatomic) MQQCustomInputTextField *lastLeftFlowTextField; // @synthesize lastLeftFlowTextField=_lastLeftFlowTextField;
@property(retain, nonatomic) MQQSwitch *extendsLastLeftFlowSwitch; // @synthesize extendsLastLeftFlowSwitch=_extendsLastLeftFlowSwitch;
@property(retain, nonatomic) MQQCustomInputTextField *extendsLastLeftFlowTextField; // @synthesize extendsLastLeftFlowTextField=_extendsLastLeftFlowTextField;
@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) MQQCustomInputTextField *carrierTextField; // @synthesize carrierTextField=_carrierTextField;
@property(retain, nonatomic) MQQCustomInputTextField *locationTextField; // @synthesize locationTextField=_locationTextField;
@property(retain, nonatomic) MQQInputListView *inputListView; // @synthesize inputListView=_inputListView;
@property(nonatomic) _Bool isFirstSetup; // @synthesize isFirstSetup=_isFirstSetup;
- (void)extendsLastLeftFlowValueChanged:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)updateCurrentCarriers;
- (void)save;
- (void)cancel:(id)arg1;
- (void)next:(id)arg1;
- (void)done:(id)arg1;
- (id)carrierAtIndex:(long long)arg1 fieldIndex:(unsigned long long)arg2;
- (id)locationAtIndex:(long long)arg1 fieldIndex:(unsigned long long)arg2;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (double)pickerView:(id)arg1 widthForComponent:(long long)arg2;
- (id)pickerView:(id)arg1 viewForRow:(long long)arg2 forComponent:(long long)arg3 reusingView:(id)arg4;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
