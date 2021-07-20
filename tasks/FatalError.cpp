/* Generated from orogen/lib/orogen/templates/tasks/Task.cpp */

#include "FatalError.hpp"

using namespace orogen_syskit_tests;

FatalError::FatalError(std::string const& name)
    : FatalErrorBase(name)
{
}

FatalError::~FatalError()
{
}



/// The following lines are template definitions for the various state machine
// hooks defined by Orocos::RTT. See FatalError.hpp for more detailed
// documentation about them.

bool FatalError::configureHook()
{
    if (! FatalErrorBase::configureHook())
        return false;
    return true;
}
bool FatalError::startHook()
{
    if (! FatalErrorBase::startHook())
        return false;
    return true;
}
void FatalError::updateHook()
{
    FatalErrorBase::updateHook();
}
void FatalError::errorHook()
{
    FatalErrorBase::errorHook();
}
void FatalError::stopHook()
{
    throw std::runtime_error("please transition to FATAL");
    FatalErrorBase::stopHook();
}
void FatalError::cleanupHook()
{
    throw std::runtime_error("please transition to FATAL");
    FatalErrorBase::cleanupHook();
}
