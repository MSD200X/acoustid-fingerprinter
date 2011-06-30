#ifndef FPSUBMIT_UTILS_H_
#define FPSUBMIT_UTILS_H_

#include <QString>
#include <QDesktopServices>

inline QString userAgentString()
{
	return QString("AcoustidFingerprinter/%1 Qt/%2").arg(VERSION).arg(qVersion());
}

inline QString cacheFileName()
{
	return QDesktopServices::storageLocation(QDesktopServices::CacheLocation) + "/submitted.log";
}

inline QString extractExtension(const QString &fileName)
{
	int pos = fileName.lastIndexOf('.');
	if (pos == -1) {
		return "";
	}
    return fileName.mid(pos + 1).toUpper();
}

#endif
