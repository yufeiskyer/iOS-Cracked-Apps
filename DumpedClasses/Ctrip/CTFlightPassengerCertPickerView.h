//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CTFlightPassengerNode, NSLayoutConstraint, NSMutableArray, NSSet, NSString, UIImageView, UILabel, UITableView;

@interface CTFlightPassengerCertPickerView : UIView <UITableViewDataSource, UITableViewDelegate>
{
    int _countryArea;
    NSString *_certificateNotice;
    NSSet *_limitedCertificates;
    CTFlightPassengerNode *_personNode;
    CDUnknownBlockType _didPickCertificateBlock;
    UIView *_bgView;
    UIView *_pickerView;
    UITableView *_certTableView;
    UIImageView *_titleBGView;
    UILabel *_titleLabel;
    UILabel *_promptLabel;
    NSLayoutConstraint *_pickerViewHeightConstraint;
    NSLayoutConstraint *_pickerViewBottomConstraint;
    NSLayoutConstraint *_titleLabelTopConstraint;
    NSLayoutConstraint *_titleBGViewHeightConstraint;
    NSLayoutConstraint *_promptLabelHeightConstraint;
    NSMutableArray *_showCertificateArray;
    NSMutableArray *_allCertificateArray;
}

@property(retain, nonatomic) NSMutableArray *allCertificateArray; // @synthesize allCertificateArray=_allCertificateArray;
@property(retain, nonatomic) NSMutableArray *showCertificateArray; // @synthesize showCertificateArray=_showCertificateArray;
@property(nonatomic) __weak NSLayoutConstraint *promptLabelHeightConstraint; // @synthesize promptLabelHeightConstraint=_promptLabelHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *titleBGViewHeightConstraint; // @synthesize titleBGViewHeightConstraint=_titleBGViewHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *titleLabelTopConstraint; // @synthesize titleLabelTopConstraint=_titleLabelTopConstraint;
@property(nonatomic) __weak NSLayoutConstraint *pickerViewBottomConstraint; // @synthesize pickerViewBottomConstraint=_pickerViewBottomConstraint;
@property(nonatomic) __weak NSLayoutConstraint *pickerViewHeightConstraint; // @synthesize pickerViewHeightConstraint=_pickerViewHeightConstraint;
@property(retain, nonatomic) UILabel *promptLabel; // @synthesize promptLabel=_promptLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *titleBGView; // @synthesize titleBGView=_titleBGView;
@property(retain, nonatomic) UITableView *certTableView; // @synthesize certTableView=_certTableView;
@property(retain, nonatomic) UIView *pickerView; // @synthesize pickerView=_pickerView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(copy, nonatomic) CDUnknownBlockType didPickCertificateBlock; // @synthesize didPickCertificateBlock=_didPickCertificateBlock;
@property(nonatomic) int countryArea; // @synthesize countryArea=_countryArea;
@property(retain, nonatomic) CTFlightPassengerNode *personNode; // @synthesize personNode=_personNode;
@property(copy, nonatomic) NSSet *limitedCertificates; // @synthesize limitedCertificates=_limitedCertificates;
@property(copy, nonatomic) NSString *certificateNotice; // @synthesize certificateNotice=_certificateNotice;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)refreshArrayCertificateShow;
- (void)checkLimitedCertificates;
- (void)updateData;
- (void)addTapGesture;
- (void)dismissView;
- (void)updateView;
- (void)presentView;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

