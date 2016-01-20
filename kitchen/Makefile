.SILENT:

bacon_pancakes: batter bacon
	./mix batter bacon
	echo "You mix the bacon in the batter and cook up some delicious bacon pancakes."

batter: dry_mix wet_mix
	./mix dry_mix wet_mix
	echo "You create the batter."
	
dry_mix: flour sugar
	./mix flour sugar
	echo "You mix the flour and sugar to make the dry mix."

wet_mix: milk eggs
	./mix milk eggs
	echo "You mix the milk and eggs to make the wet mix."

flour:
	touch flour
	echo "You buy some flour."
sugar:
	touch sugar
	echo "You buy some sugar."
milk:
	touch milk
	echo "You buy some milk."
eggs:
	touch eggs
	echo "You buy some eggs."
bacon:
	touch bacon
	echo "You buy some cooked bacon bits."

clean:
	rm bacon eggs milk sugar flour wet_mix dry_mix batter bacon_pancakes
