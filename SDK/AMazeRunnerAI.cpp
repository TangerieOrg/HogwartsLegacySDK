#include "AMazeRunnerAI.hpp"
#include "ASocialNavigatorController.hpp"
AMazeRunnerAI* AMazeRunnerAI::StaticClass() {
    static auto res = find_uobject("Class /Script/Phoenix.MazeRunnerAI");
    return (AMazeRunnerAI*)res;
}
