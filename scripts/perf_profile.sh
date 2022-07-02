#!/bin/bash

# python3
# sudo apt-get install graphviz
# pip install gprof2dot

sudo perf record -g -- ./perf_usage
perf script | c++filt | gprof2dot -s -f perf | dot -Tsvg -o perf_usage_graph.svg