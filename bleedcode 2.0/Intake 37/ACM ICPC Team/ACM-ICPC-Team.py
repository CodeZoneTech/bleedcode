#!/bin/python

import math
import os
import random
import re
import sys

# Complete the acmTeam function below.

def acmTeam(topic):
    d = []
    resdic = {}
    m = 0
    for t in topic:
        temp = set()
        for i in range(len(t)):
            if t[i]=='1':
                temp.add(i)
        d.append(temp.copy())
    # print(d)
    for i in range(len(d)-1):
        for j in range(i+1,len(d)):
            l = len(d[i].union(d[j]))
            m = max(m,l)
            resdic[l]=resdic.get(l,0)+1
    return [m,resdic[m]]
if __name__ == '__main__':
    fptr = open(os.environ['OUTPUT_PATH'], 'w')

    nm = raw_input().split()

    n = int(nm[0])

    m = int(nm[1])

    topic = []

    for _ in xrange(n):
        topic_item = raw_input()
        topic.append(topic_item)

    result = acmTeam(topic)

    fptr.write('\n'.join(map(str, result)))
    fptr.write('\n')

    fptr.close()
