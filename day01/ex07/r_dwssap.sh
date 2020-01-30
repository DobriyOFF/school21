cat  /etc/passwd |  | awk 'NR % 2 == 0' | cut -d: -f1 | rev | sort | sed 1,7d | sed 9, 40d


000
111
121
987
789

  a = 1
  b = 1
  c = 1

If a != b || b != c || a != c


