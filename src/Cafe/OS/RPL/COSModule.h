#pragma once

// base class for HLE RPL implementations
class COSModule
{
public:
	virtual std::string_view GetName() = 0;

	virtual void RPLMapped() {}; // RPL mapped into process
	virtual void RPLUnmapped() {}; // RPL unmapped. This is also called when the process is force closed or shutdown non-gracefully

	virtual void rpl_entry() {}
};

std::span<COSModule*> GetCOSModules();