//
//  EKGraph.h
//  EKAlgorithms
//
//  Created by Evgeny Karkan on 12.11.13.
//  Copyright (c) 2013 EvgenyKarkan. All rights reserved.
//

@class EKVertex;

@interface EKGraph : NSObject

@property (nonatomic, strong) NSMutableArray *vertices;

- (instancetype)initWithStartVertex:(id)startVertex;
- (void)depthFirstSearch;
- (void)breadthFirstSearch;
- (BOOL)isUndirectedGraph;

- (void)primMST:(id)startVertex;
- (void)dijkstraSPTFrom:(id)sourceVertex To:(id)targetVertex;
- (void)topSort;

@end
