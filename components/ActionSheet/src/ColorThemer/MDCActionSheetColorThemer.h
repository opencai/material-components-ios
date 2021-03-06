// Copyright 2018-present the Material Components for iOS authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#import "MaterialActionSheet.h"

#import <Foundation/Foundation.h>

#import <MaterialComponents/MaterialColorScheme.h>

/**
 The Material Design color system's themer for instances of MDCActionSheetController.
 */
@interface MDCActionSheetColorThemer : NSObject

/**
 Applies a color scheme's properties to an MDCActionSheetController

 @param colorScheme The color scheme to apply to the component instance.
 @param actionSheetController A component instance to which the olor scheme should be applied.
 */
+ (void)applySemanticColorScheme:(nonnull id<MDCColorScheming>)colorScheme
         toActionSheetController:(nonnull MDCActionSheetController *)actionSheetController;

@end
