#include "linkedWDigraph.h"

void solution1() {
    DAG graph;
    graph.placeBooster(1, 0);
    graph.output();
}

void solution2() {
    DAG graph;
    graph.branchJudge();
    graph.output();
}

int main() {
    freopen("网络放大器设置/data/input/input1.in", "r", stdin);
    freopen("网络放大器设置/data/output/1.out", "w", stdout);
    // solution1();
    solution2();

    return 0;
}