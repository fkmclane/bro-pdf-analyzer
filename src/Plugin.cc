#include "PDF.h"

#include "Plugin.h"

namespace plugin { namespace Analyzer_PDF { Plugin plugin; } }

using namespace plugin::Analyzer_PDF;

plugin::Configuration Plugin::Configure() {
	AddComponent(new ::file_analysis::Component("PDF", ::file_analysis::PDF::Instantiate));

	plugin::Configuration config;
	config.name = "Analyzer::PDF";
	config.description = "a PDF file analyzer for Zeek (Bro)";
	config.version.major = 0;
	config.version.minor = 1;
#if BRO_PLUGIN_API_VERSION >= 7
	config.version.patch = 0;
#endif
	return config;
}
