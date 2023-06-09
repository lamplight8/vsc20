export module logger;

export import ilogger;
import <string_view>;
import <fstream>;

export class Logger : public ILogger
{
public:
	explicit Logger(std::string_view logFilename);
	virtual ~Logger();
	void setLogLevel(LogLevel level) override;
	void log(std::string_view message, LogLevel logLevel) override;

private:
	// Converts a log level to a human readable string.
	std::string_view getLogLevelString(LogLevel level) const;

	std::ofstream m_outputStream;
	LogLevel m_logLevel{ LogLevel::Error };
};
