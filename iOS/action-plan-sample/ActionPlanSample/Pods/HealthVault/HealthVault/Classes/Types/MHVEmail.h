//
// MHVEmail.h
// MHVLib
//
// Copyright (c) 2017 Microsoft Corporation. All rights reserved.
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

#import "MHVType.h"
#import "MHVBaseTypes.h"
#import "MHVVocabulary.h"

@interface MHVEmail : MHVType

// -------------------------
//
// Data
//
// -------------------------
//
// (Required)
// Note: MHVEmailAddress currently does the minimal validation, so you may want
// to run any RegEx or other validation scripts on the address
//
@property (readwrite, nonatomic, strong) MHVEmailAddress *address;
//
// (Optional) A description of this email (Personal, Work, etc)
//
@property (readwrite, nonatomic, strong) NSString *type;
//
// (Optional)
//
@property (readwrite, nonatomic, strong) MHVBool *isPrimary;

// -------------------------
//
// Initializers
//
// -------------------------
- (instancetype)initWithEmailAddress:(NSString *)email;

+ (MHVVocabularyIdentifier *)vocabForType;

// -------------------------
//
// TEXT
//
// -------------------------
- (NSString *)toString;

@end

