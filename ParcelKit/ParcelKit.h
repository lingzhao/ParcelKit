//
//  ParcelKit.h
//  ParcelKit
//
//  Copyright (c) 2013 Overcommitted, LLC. All rights reserved.
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.
//

// Binary data is stored separately from regular data in a special table
// named by appending a suffix to the original tableID.
// The suffix can be overridden by defining PKBinaryDataTableSuffix before including ParcelKit.
#ifndef PKBinaryDataTableSuffix
#define PKBinaryDataTableSuffix @".bin"
#endif

// By default binary data will use up to half the maximum record size of 100 KiB.
// Can be overridden by defining PKMaximumBinaryDataLengthInBytes before including ParcelKit.
#ifndef PKMaximumBinaryDataLengthInBytes
#define PKMaximumBinaryDataLengthInBytes 50000
#endif

#import <ParcelKit/PKSyncManager.h>
#import <ParcelKit/NSManagedObject+ParcelKit.h>
#import <ParcelKit/DBRecord+ParcelKit.h>
