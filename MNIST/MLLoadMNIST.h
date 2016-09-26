//
//  MLLoadMNIST.h
//  MNIST
//
//  Created by Jiao Liu on 9/23/16.
//  Copyright © 2016 ChangHong. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MLLoadMNIST : NSObject

- (NSArray *)readImageData:(NSString *)filePath;
- (NSArray *)readLabelData:(NSString *)filePath;
double **readImageData(char *filePath);
int *readLabelData(char *filePath);

@end