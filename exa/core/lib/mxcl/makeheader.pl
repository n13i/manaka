#!/usr/bin/perl
use strict;

my $infile = 'pwsconst.aya';
my $outfile = 'pwsconst.h';

print "generating ".$outfile." ...\n";

open(IN, $infile) or die;
open(OUT, '>'.$outfile) or die;
binmode OUT;
foreach(<IN>)
{
    if(/^((?:int|double|char|string|boolean)\s[^=\s]+)/)
	{
		print OUT "extern ".$1.";\r\n";
	}
}
close(OUT);
close(IN);

print "done.\n";
