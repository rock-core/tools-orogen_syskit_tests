/* Generated from orogen/lib/orogen/templates/tasks/Task.cpp */

#include "ExceptionFromStopHook.hpp"

using namespace orogen_syskit_tests;

ExceptionFromStopHook::ExceptionFromStopHook(std::string const& name)
    : ExceptionFromStopHookBase(name)
{
}

ExceptionFromStopHook::~ExceptionFromStopHook()
{
}



/// The following lines are template definitions for the various state machine
// hooks defined by Orocos::RTT. See ExceptionFromStopHook.hpp for more detailed
// documentation about them.

bool ExceptionFromStopHook::configureHook()
{
    if (! ExceptionFromStopHookBase::configureHook())
        return false;
    return true;
}
bool ExceptionFromStopHook::startHook()
{
    if (! ExceptionFromStopHookBase::startHook())
        return false;
    return true;
}
void ExceptionFromStopHook::updateHook()
{
    ExceptionFromStopHookBase::updateHook();
}
void ExceptionFromStopHook::errorHook()
{
    ExceptionFromStopHookBase::errorHook();
}
void ExceptionFromStopHook::stopHook()
{
    exception(CUSTOM_EXCEPTION);
    ExceptionFromStopHookBase::stopHook();
}
void ExceptionFromStopHook::cleanupHook()
{
    ExceptionFromStopHookBase::cleanupHook();
}
