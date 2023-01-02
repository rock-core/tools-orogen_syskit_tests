/* Generated from orogen/lib/orogen/templates/tasks/Task.cpp */

#include "CustomStates.hpp"

using namespace orogen_syskit_tests;

CustomStates::CustomStates(std::string const& name)
    : CustomStatesBase(name)
{
}

CustomStates::~CustomStates()
{
}

/// The following lines are template definitions for the various state machine
// hooks defined by Orocos::RTT. See CustomStates.hpp for more detailed
// documentation about them.

bool CustomStates::configureHook()
{
    if (!CustomStatesBase::configureHook())
        return false;
    return true;
}
bool CustomStates::startHook()
{
    if (!CustomStatesBase::startHook())
        return false;
    return true;
}
void CustomStates::updateHook()
{
    if (_level.get() == 0) {
        state(CUSTOM_RUNTIME);
    }
    else if (_level.get() == 1) {
        error(CUSTOM_ERROR);
    }
    else if (_level.get() == 2) {
        exception(CUSTOM_EXCEPTION);
    }
    CustomStatesBase::updateHook();
}
void CustomStates::errorHook()
{
    CustomStatesBase::errorHook();
}
void CustomStates::stopHook()
{
    CustomStatesBase::stopHook();
}
void CustomStates::cleanupHook()
{
    CustomStatesBase::cleanupHook();
}
