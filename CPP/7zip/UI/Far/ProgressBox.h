// ProgressBox.h

#ifndef __PROGRESS_BOX_H
#define __PROGRESS_BOX_H

#include "../../../Common/MyString.h"
#include "../../../Common/MyTypes.h"

void ConvertUInt64ToStringAligned(UInt64 value, char *s, int alignSize);

class CMessageBox
{
  AString _title;
  int _width;
public:
  void Init(const AString &title, int width);
  void ShowMessages(const char *strings[], int numStrings);
};

class CProgressBox: public CMessageBox
{
  AString _prevMessage;
  AString _prevPercentMessage;
  bool _wasShown;
public:
  void Init(const AString &title, int width);
  void Progress(const UInt64 *total, const UInt64 *completed, const AString &message);
};

#endif
