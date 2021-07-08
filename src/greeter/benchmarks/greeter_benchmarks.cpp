#include "benchmark/benchmark.h"

#include "greeter.hpp"
#include "greeter_api.h"

#define TEST_NAME "Margot"

using greeter::Greeter;

void GreeterNative(benchmark::State& state)
{
    Greeter g;

    for (auto _ : state)
    {
        g.greet(TEST_NAME);
    }
}

BENCHMARK(GreeterNative);

void GreeterLib(benchmark::State& state)
{
    auto* g = greeter_new();

    for (auto _ : state)
    {
        greeter_greet(g, TEST_NAME);
    }

    greeter_free(g);
}

BENCHMARK(GreeterLib);
