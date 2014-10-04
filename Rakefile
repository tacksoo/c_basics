require 'rake/clean'

desc "Compile memory allocation example"
task "mem" => ["mem.c"] do
  sh "gcc -o mem.exe mem.c"
end

CLEAN.include "**/*\.o", "**/*\.out", "**/*\.exe"
