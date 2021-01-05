int DaysInMonth(int month, int year) {
  int days_month;
  if (month == 2) {
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0))
      days_month = 29;
    else
      days_month = 28;
  } else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    days_month = 31;
  else
    days_month = 30;

  return days_month;
}